#include "SekTools.h"

#include <QGuiApplication>
#include <QClipboard>
#include <QUuid>
#include <QCursor>
#include <QScreen>
#include <QColor>
#include <QFileInfo>
#include <QProcess>
#include <QDir>
#include <QOpenGLContext>
#include <QCryptographicHash>
#include <QTextDocument>
#include <QQuickWindow>
#include <QDateTime>
#include <QSettings>

SekTools::SekTools(QObject *parent):QObject{parent}{

}

void SekTools::clipText(const QString& text){
    QGuiApplication::clipboard()->setText(text);
}

QString SekTools::uuid(){
    return QUuid::createUuid().toString();
}

QString SekTools::readFile(const QString &fileName){
    QString content;
    QFile file(fileName);
    if (file.open(QIODevice::ReadOnly)) {
        QTextStream stream(&file);
        content = stream.readAll();
    }
    return content;
}

bool SekTools::isMacos(){
#if defined(Q_OS_MACOS)
    return true;
#else
    return false;
#endif
}

bool SekTools::isLinux(){
#if defined(Q_OS_LINUX)
    return true;
#else
    return false;
#endif
}

bool SekTools::isWin(){
#if defined(Q_OS_WIN)
    return true;
#else
    return false;
#endif
}

int SekTools::qtMajor(){
    const QString qtVersion = QString::fromLatin1(qVersion());
    const QStringList versionParts = qtVersion.split('.');
    return versionParts[0].toInt();
}

int SekTools::qtMinor(){
    const QString qtVersion = QString::fromLatin1(qVersion());
    const QStringList versionParts = qtVersion.split('.');
    return versionParts[1].toInt();
}

void SekTools::setQuitOnLastWindowClosed(bool val){
    qApp->setQuitOnLastWindowClosed(val);
}

void SekTools::setOverrideCursor(Qt::CursorShape shape){
    qApp->setOverrideCursor(QCursor(shape));
}

void SekTools::restoreOverrideCursor(){
    qApp->restoreOverrideCursor();
}

void SekTools::deleteItem(QObject *p){
    if(p){
        delete p;
        p = nullptr;
    }
}

QString SekTools::toLocalPath(const QUrl& url){
    return url.toLocalFile();
}

QString SekTools::getFileNameByUrl(const QUrl& url){
    return QFileInfo(url.toLocalFile()).fileName();
}

QString SekTools::html2PlantText(const QString& html){
    QTextDocument textDocument;
    textDocument.setHtml(html);
    return textDocument.toPlainText();
}

QRect SekTools::getVirtualGeometry(){
    return qApp->primaryScreen()->virtualGeometry();
}

QString SekTools::getApplicationDirPath(){
    return qApp->applicationDirPath();
}

QUrl SekTools::getUrlByFilePath(const QString& path){
    return QUrl::fromLocalFile(path);
}

QColor SekTools::colorAlpha(const QColor& color,qreal alpha){
    return QColor(color.red(),color.green(),color.blue(),255*alpha);
}

QString SekTools::md5(QString text){
    return QCryptographicHash::hash(text.toUtf8(), QCryptographicHash::Md5).toHex();
}

QString SekTools::toBase64(QString text){
    return text.toUtf8().toBase64();
}

QString SekTools::fromBase64(QString text){
    return QByteArray::fromBase64(text.toUtf8());
}

bool SekTools::removeDir(QString dirPath){
    QDir qDir(dirPath);
    return qDir.removeRecursively();
}

bool SekTools::removeFile(QString filePath){
    QFile file(filePath);
    return file.remove();
}

QString SekTools::sha256(QString text){
    return QCryptographicHash::hash(text.toUtf8(), QCryptographicHash::Sha256).toHex();
}

void SekTools::showFileInFolder(QString path){
#if defined(Q_OS_WIN)
    QProcess::startDetached("explorer.exe", {"/select,", QDir::toNativeSeparators(path)});
#endif
#if defined(Q_OS_LINUX)
    QFileInfo fileInfo(path);
    auto process = "xdg-open";
    auto arguments = { fileInfo.absoluteDir().absolutePath() };
    QProcess::startDetached(process, arguments);
#endif
#if defined(Q_OS_MACOS)
    QProcess::execute("/usr/bin/osascript", {"-e", "tell application \"Finder\" to reveal POSIX file \"" + path + "\""});
    QProcess::execute("/usr/bin/osascript", {"-e", "tell application \"Finder\" to activate"});
#endif
}

bool SekTools::isSoftware(){
    return QQuickWindow::sceneGraphBackend() == "software";
}

QPoint SekTools::cursorPos(){
    return QCursor::pos();
}

qint64 SekTools::currentTimestamp(){
    return QDateTime::currentMSecsSinceEpoch();
}

QIcon SekTools::windowIcon(){
    return QGuiApplication::windowIcon();
}

int SekTools::cursorScreenIndex(){
    int screenIndex = 0;
    int screenCount = qApp->screens().count();
    if (screenCount > 1) {
        QPoint pos = QCursor::pos();
        for (int i = 0; i < screenCount; ++i) {
            if (qApp->screens().at(i)->geometry().contains(pos)) {
                screenIndex = i;
                break;
            }
        }
    }
    return screenIndex;
}

int SekTools::windowBuildNumber(){
#if defined(Q_OS_WIN)
    QSettings regKey {QString::fromUtf8("HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion"), QSettings::NativeFormat};
    if (regKey.contains(QString::fromUtf8("CurrentBuildNumber"))) {
        auto buildNumber = regKey.value(QString::fromUtf8("CurrentBuildNumber")).toInt();
        return buildNumber;
    }
#endif
    return -1;
}

bool SekTools::isWindows11OrGreater(){
    static QVariant var;
    if(var.isNull()){
#if defined(Q_OS_WIN)
        auto buildNumber = windowBuildNumber();
        if(buildNumber>=22000){
            var = QVariant::fromValue(true);
            return true;
        }
#endif
        var = QVariant::fromValue(false);
        return  false;
    }else{
        return var.toBool();
    }
}

bool SekTools::isWindows10OrGreater(){
    static QVariant var;
    if(var.isNull()){
#if defined(Q_OS_WIN)
        auto buildNumber = windowBuildNumber();
        if(buildNumber>=10240){
            var = QVariant::fromValue(true);
            return true;
        }
#endif
        var = QVariant::fromValue(false);
        return  false;
    }else{
        return var.toBool();
    }
}

int SekTools::getTaskBarHeight(QQuickWindow* window){
    return window->screen()->geometry().height() - window->screen()->availableGeometry().height();
}
