// /example/main.qml
#include <QtQml/qqmlprivate.h>
#include <QtCore/qdatetime.h>
#include <QtCore/qobject.h>
#include <QtCore/qstring.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qtimezone.h>
#include <QtCore/qurl.h>
#include <QtCore/qvariant.h>
#include <QtQml/qjsengine.h>
#include <QtQml/qjsprimitivevalue.h>
#include <QtQml/qjsvalue.h>
#include <QtQml/qqmlcomponent.h>
#include <QtQml/qqmlcontext.h>
#include <QtQml/qqmlengine.h>
#include <QtQml/qqmllist.h>
#include <type_traits>
namespace QmlCacheGeneratedCode {
namespace _example_main_qml {
extern const unsigned char qmlData alignas(16) [];
extern const unsigned char qmlData alignas(16) [] = {

0x71,0x76,0x34,0x63,0x64,0x61,0x74,0x61,
0x3d,0x0,0x0,0x0,0x1,0x6,0x6,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7c,0x7,0x0,0x0,0x61,0x34,0x64,0x37,
0x63,0x38,0x37,0x39,0x61,0x32,0x31,0x64,
0x62,0x30,0x62,0x64,0x31,0x61,0x66,0x66,
0x36,0x65,0x39,0x61,0x36,0x39,0x37,0x30,
0x36,0x30,0x30,0x62,0x62,0x32,0x65,0x61,
0x36,0x63,0x36,0x30,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1b,0x5,0x5b,0x1a,
0x99,0x84,0x68,0x71,0xec,0xb7,0xb7,0x73,
0x66,0x21,0x5f,0x19,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x23,0x0,0x0,0x0,
0x16,0x0,0x0,0x0,0x50,0x2,0x0,0x0,
0x3,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x4,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x4,0x1,0x0,0x0,
0x1,0x0,0x0,0x0,0x4,0x1,0x0,0x0,
0x4,0x0,0x0,0x0,0x8,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x1,0x0,0x0,
0x2,0x0,0x0,0x0,0x20,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x30,0x1,0x0,0x0,
0x1,0x0,0x0,0x0,0x30,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x40,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x40,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x40,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x40,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x40,0x1,0x0,0x0,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x28,0x5,0x0,0x0,
0x40,0x1,0x0,0x0,0xa0,0x1,0x0,0x0,
0xf0,0x1,0x0,0x0,0x40,0x2,0x0,0x0,
0x53,0x1,0x0,0x0,0xe0,0x0,0x0,0x0,
0x53,0x1,0x0,0x0,0x0,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x40,0x71,0x3f,
0x0,0x0,0x0,0x0,0x0,0x40,0x8b,0x3f,
0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x50,0x0,0x0,0x0,0x5,0x0,0x0,0x0,
0x14,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x39,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x2d,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x2d,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x2f,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0xca,0xd4,0x16,0x6,0x2,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0x7,0x0,0x0,0x0,
0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x39,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x2a,0x0,0xd0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x2a,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x0,0x3c,0x1,
0x18,0x6,0x2,0x0,0x0,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0x7,0x0,0x0,0x0,
0x11,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x39,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x2b,0x0,0xd0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x2b,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x2,0x3c,0x3,
0x18,0x6,0x2,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xa8,0x2,0x0,0x0,0xb0,0x2,0x0,0x0,
0xc8,0x2,0x0,0x0,0xe0,0x2,0x0,0x0,
0xf8,0x2,0x0,0x0,0x8,0x3,0x0,0x0,
0x20,0x3,0x0,0x0,0x38,0x3,0x0,0x0,
0x48,0x3,0x0,0x0,0x68,0x3,0x0,0x0,
0x90,0x3,0x0,0x0,0xb0,0x3,0x0,0x0,
0xc8,0x3,0x0,0x0,0xd8,0x3,0x0,0x0,
0x0,0x4,0x0,0x0,0x28,0x4,0x0,0x0,
0x68,0x4,0x0,0x0,0x78,0x4,0x0,0x0,
0xa8,0x4,0x0,0x0,0xc0,0x4,0x0,0x0,
0xd8,0x4,0x0,0x0,0x10,0x5,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x53,0x0,0x65,0x0,
0x6b,0x0,0x69,0x0,0x72,0x0,0x6f,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x57,0x0,0x69,0x0,
0x6e,0x0,0x64,0x0,0x6f,0x0,0x77,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x77,0x0,0x69,0x0,
0x64,0x0,0x74,0x0,0x68,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x68,0x0,0x65,0x0,
0x69,0x0,0x67,0x0,0x68,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x76,0x0,0x69,0x0,
0x73,0x0,0x69,0x0,0x62,0x0,0x6c,0x0,
0x65,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x74,0x0,0x69,0x0,
0x74,0x0,0x6c,0x0,0x65,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x48,0x0,0x65,0x0,
0x6c,0x0,0x6c,0x0,0x6f,0x0,0x20,0x0,
0x57,0x0,0x6f,0x0,0x72,0x0,0x6c,0x0,
0x64,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x10,0x0,0x0,0x0,0x53,0x0,0x65,0x0,
0x6b,0x0,0x4c,0x0,0x6f,0x0,0x61,0x0,
0x64,0x0,0x69,0x0,0x6e,0x0,0x67,0x0,
0x42,0x0,0x75,0x0,0x74,0x0,0x74,0x0,
0x6f,0x0,0x6e,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x62,0x0,0x74,0x0,
0x6e,0x0,0x5f,0x0,0x6c,0x0,0x6f,0x0,
0x61,0x0,0x64,0x0,0x69,0x0,0x6e,0x0,
0x67,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x6c,0x0,0x6f,0x0,
0x61,0x0,0x64,0x0,0x69,0x0,0x6e,0x0,
0x67,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x74,0x0,0x65,0x0,
0x78,0x0,0x74,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x4c,0x0,0x6f,0x0,
0x61,0x0,0x64,0x0,0x69,0x0,0x6e,0x0,
0x67,0x0,0x20,0x0,0x42,0x0,0x75,0x0,
0x74,0x0,0x74,0x0,0x6f,0x0,0x6e,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x76,0x0,0x65,0x0,
0x72,0x0,0x74,0x0,0x69,0x0,0x63,0x0,
0x61,0x0,0x6c,0x0,0x43,0x0,0x65,0x0,
0x6e,0x0,0x74,0x0,0x65,0x0,0x72,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1d,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x76,0x0,0x65,0x0,0x72,0x0,
0x74,0x0,0x69,0x0,0x63,0x0,0x61,0x0,
0x6c,0x0,0x43,0x0,0x65,0x0,0x6e,0x0,
0x74,0x0,0x65,0x0,0x72,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x6c,0x0,0x65,0x0,
0x66,0x0,0x74,0x0,0x0,0x0,0x0,0x0,
0x13,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x6c,0x0,0x65,0x0,0x66,0x0,
0x74,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x61,0x0,0x6e,0x0,
0x63,0x0,0x68,0x0,0x6f,0x0,0x72,0x0,
0x73,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x6f,0x0,0x6e,0x0,
0x43,0x0,0x6c,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x65,0x0,0x64,0x0,0x0,0x0,
0x18,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x6f,0x0,0x6e,0x0,0x43,0x0,
0x6c,0x0,0x69,0x0,0x63,0x0,0x6b,0x0,
0x65,0x0,0x64,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x70,0x0,0x61,0x0,
0x72,0x0,0x65,0x0,0x6e,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x3,0x0,0x0,0x0,0x38,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x10,0x0,
0xff,0xff,0x0,0x0,0x1,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x3,0x0,0x10,0x0,0xff,0xff,0x0,0x0,
0x44,0x0,0x0,0x0,0x14,0x1,0x0,0x0,
0xcc,0x1,0x0,0x0,0x3,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x5,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xcc,0x0,0x0,0x0,
0x5,0x0,0x10,0x0,0x0,0x0,0x0,0x0,
0xcc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xcc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x0,0x0,0x5,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x50,0x0,0x9,0x0,0xc0,0x0,
0x6,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x50,0x0,0x8,0x0,0xe0,0x0,
0x5,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x50,0x0,0x7,0x0,0xd0,0x0,
0x4,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x50,0x0,0x6,0x0,0xc0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x25,0x0,0x50,0x0,0x25,0x0,0x50,0x0,
0x0,0x0,0x0,0x0,0x9,0x0,0x0,0x0,
0xa,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x4,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,
0x25,0x0,0x50,0x0,0x26,0x0,0x90,0x0,
0xb4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x13,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2d,0x0,0x90,0x0,0x2d,0x0,0x40,0x1,
0xc,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0x0,0x0,0x0,0x0,0xd,0x0,0x0,0x0,
0x28,0x0,0x90,0x0,0x28,0x0,0xe0,0x0,
0xb,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x27,0x0,0x90,0x0,0x27,0x0,0x10,0x1,
0x12,0x0,0x0,0x0,0x0,0x0,0xa,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x29,0x0,0x90,0x0,0x29,0x0,0x90,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x2,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x84,0x0,0x0,0x0,
0x29,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x84,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x84,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x10,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2b,0x0,0xd0,0x0,0x2b,0x0,0x30,0x1,
0xe,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2a,0x0,0xd0,0x0,0x2a,0x0,0xd0,0x1,
0x0,0x0,0x0,0x0
};
QT_WARNING_PUSH
QT_WARNING_DISABLE_MSVC(4573)

template <typename Binding>
void wrapCall(const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr, Binding &&binding)
{
    using return_type = std::invoke_result_t<Binding, const QQmlPrivate::AOTCompiledContext *, void **>;
    if constexpr (std::is_same_v<return_type, void>) {
       Q_UNUSED(dataPtr)
       binding(aotContext, argumentsPtr);
    } else {
        if (dataPtr) {
           new (dataPtr) return_type(binding(aotContext, argumentsPtr));
        } else {
           binding(aotContext, argumentsPtr);
        }
    }
}
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[] = {
{ 0, QMetaType::fromType<void>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for onClicked at line 45, column 9
// generate_CreateCallContext
{
// generate_PopContext
;}
// generate_Ret
return;
});}
 },{ 1, QMetaType::fromType<QVariant>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for verticalCenter at line 42, column 13
QObject *r2_0;
QVariant r2_1;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadScopeObjectPropertyLookup(0, &r2_0)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadScopeObjectPropertyLookup(0, []() { static const auto t = QMetaType::fromName("QQuickItem*"); return t; }());
if (aotContext->engine->hasError())
    return QVariant();
}
// generate_GetLookup
r2_1 = QVariant(aotContext->lookupResultMetaType(1));
while (!aotContext->getObjectLookup(1, r2_0, r2_1.data())) {
aotContext->setInstructionPointer(4);
aotContext->initGetObjectLookup(1, r2_0, r2_1.metaType());
if (aotContext->engine->hasError())
    return QVariant();
r2_1 = QVariant(aotContext->lookupResultMetaType(1));
}
// generate_Ret
if (!r2_1.isValid())
    aotContext->setReturnValueUndefined();
return r2_1;
});}
 },{ 2, QMetaType::fromType<QVariant>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for left at line 43, column 13
QObject *r2_0;
QVariant r2_1;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadScopeObjectPropertyLookup(2, &r2_0)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadScopeObjectPropertyLookup(2, []() { static const auto t = QMetaType::fromName("QQuickItem*"); return t; }());
if (aotContext->engine->hasError())
    return QVariant();
}
// generate_GetLookup
r2_1 = QVariant(aotContext->lookupResultMetaType(3));
while (!aotContext->getObjectLookup(3, r2_0, r2_1.data())) {
aotContext->setInstructionPointer(4);
aotContext->initGetObjectLookup(3, r2_0, r2_1.metaType());
if (aotContext->engine->hasError())
    return QVariant();
r2_1 = QVariant(aotContext->lookupResultMetaType(3));
}
// generate_Ret
if (!r2_1.isValid())
    aotContext->setReturnValueUndefined();
return r2_1;
});}
 },{ 0, QMetaType::fromType<void>(), {}, nullptr }};
QT_WARNING_POP
}
}
