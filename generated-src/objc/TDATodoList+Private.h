// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from todolist.djinni

#include "todo_list.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class TDATodoList;

namespace djinni_generated {

class TodoList
{
public:
    using CppType = std::shared_ptr<::todolist::TodoList>;
    using CppOptType = std::shared_ptr<::todolist::TodoList>;
    using ObjcType = TDATodoList*;

    using Boxed = TodoList;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

