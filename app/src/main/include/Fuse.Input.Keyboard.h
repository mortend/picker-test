// This file was generated based on '../Source/Fuse.Nodes/Input/Keyboard.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Fuse{namespace Input{struct Keyboard;}}}
namespace g{namespace Fuse{namespace Input{struct KeyPressed;}}}
namespace g{namespace Fuse{namespace Input{struct KeyPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct KeyReleased;}}}
namespace g{namespace Fuse{namespace Input{struct KeyReleasedArgs;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct VisualEvent;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Input{

// public static class Keyboard
// {
uClassType* Keyboard_typeof();
void Keyboard__get_KeyPressed_fn(::g::Fuse::VisualEvent** __retval);
void Keyboard__get_KeyReleased_fn(::g::Fuse::VisualEvent** __retval);
void Keyboard__get_KeyTargetVisual_fn(::g::Fuse::Visual** __retval);
void Keyboard__RaiseKeyPressed_fn(int32_t* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, bool* __retval);
void Keyboard__RaiseKeyReleased_fn(int32_t* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, bool* __retval);

struct Keyboard : uObject
{
    static uSStrong< ::g::Fuse::Input::KeyPressed*> _keyPressed_;
    static uSStrong< ::g::Fuse::Input::KeyPressed*>& _keyPressed() { return Keyboard_typeof()->Init(), _keyPressed_; }
    static uSStrong< ::g::Fuse::Input::KeyReleased*> _keyReleased_;
    static uSStrong< ::g::Fuse::Input::KeyReleased*>& _keyReleased() { return Keyboard_typeof()->Init(), _keyReleased_; }
    static uSStrong< ::g::Uno::Collections::List*> _keysDown_;
    static uSStrong< ::g::Uno::Collections::List*>& _keysDown() { return Keyboard_typeof()->Init(), _keysDown_; }
    static uSStrong< ::g::Fuse::PropertyHandle*> _keyboardHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _keyboardHandle() { return Keyboard_typeof()->Init(), _keyboardHandle_; }

    static bool RaiseKeyPressed(int32_t key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed);
    static bool RaiseKeyReleased(int32_t key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed);
    static ::g::Fuse::VisualEvent* KeyPressed();
    static ::g::Fuse::VisualEvent* KeyReleased();
    static ::g::Fuse::Visual* KeyTargetVisual();
};
// }

}}} // ::g::Fuse::Input
