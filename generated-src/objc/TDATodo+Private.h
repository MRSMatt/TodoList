// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from todolist.djinni

#import "TDATodo.h"
#include "todo.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class TDATodo;

namespace djinni_generated {

struct Todo
{
    using CppType = ::todolist::Todo;
    using ObjcType = TDATodo*;

    using Boxed = Todo;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated
