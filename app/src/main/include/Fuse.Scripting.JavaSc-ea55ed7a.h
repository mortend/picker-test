// This file was generated based on '../Source/Fuse.Scripting.JavaScript/DateTimeConverterHelpers.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct DateTimeConverterHelpers;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{struct DateTime;}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// internal static class DateTimeConverterHelpers
// {
uClassType* DateTimeConverterHelpers_typeof();
void DateTimeConverterHelpers__ConvertDateTimeToJSDate_fn(::g::Fuse::Scripting::Context* context, ::g::Uno::DateTime* dt, ::g::Fuse::Scripting::Function* dateCtor, uObject** __retval);
void DateTimeConverterHelpers__ConvertDateToDateTime_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* date, ::g::Uno::DateTime* __retval);

struct DateTimeConverterHelpers : uObject
{
    static uObject* ConvertDateTimeToJSDate(::g::Fuse::Scripting::Context* context, ::g::Uno::DateTime dt, ::g::Fuse::Scripting::Function* dateCtor);
    static ::g::Uno::DateTime ConvertDateToDateTime(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* date);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
