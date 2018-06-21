/*
	Copyright 2018 Tim Mayberry

	Permission is hereby granted, free of charge, to any person obtaining a
	copy of this software and associated documentation files (the
	"Software"), to deal in the Software without restriction, including
	without limitation the rights to use, copy, modify, merge, publish,
	distribute, sublicense, and/or sell copies of the Software, and to
	permit persons to whom the Software is furnished to do so, subject to
	the following conditions:

	The above copyright notice and this permission notice shall be included
	in all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
	OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
	MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
	IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
	CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
	TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
	SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef DEV_TOOLS_NOOP_H
#define DEV_TOOLS_NOOP_H

// logging_macros.hpp

#define A_DECLARE_LOG_CATEGORY(VariableName)
#define A_DEFINE_LOG_CATEGORY(VariableName, LogCategoryName)

#define A_LOG_MSG(LogCategoryPtr, Message)

#define A_LOG_CLASS_MSG(LogCategoryPtr, Message)

#define A_LOG_DURATION(LogCategoryPtr, Message)

#define A_LOG_CLASS_DURATION(LogCategoryPtr, Message)

#define A_LOG_CALL(LogCategoryPtr)
#define A_LOG_CALL1(LogCategoryPtr, Arg1)
#define A_LOG_CALL2(LogCategoryPtr, Arg1, Arg2)
#define A_LOG_CALL3(LogCategoryPtr, Arg1, Arg2, Arg3)
#define A_LOG_CALL4(LogCategoryPtr, Arg1, Arg2, Arg3, Arg4)
#define A_LOG_CALL5(LogCategoryPtr, Arg1, Arg2, Arg3, Arg4, Arg5)
#define A_LOG_CALL6(LogCategoryPtr, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6)
#define A_LOG_CALL7(LogCategoryPtr, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7)
#define A_LOG_CALL8(LogCategoryPtr, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8)

#define A_LOG_CLASS_CALL(LogCategoryPtr)
#define A_LOG_CLASS_CALL1(LogCategoryPtr, Arg1)
#define A_LOG_CLASS_CALL2(LogCategoryPtr, Arg1, Arg2)
#define A_LOG_CLASS_CALL3(LogCategoryPtr, Arg1, Arg2, Arg3)
#define A_LOG_CLASS_CALL4(LogCategoryPtr, Arg1, Arg2, Arg3, Arg4)
#define A_LOG_CLASS_CALL5(LogCategoryPtr, Arg1, Arg2, Arg3, Arg4, Arg5)
#define A_LOG_CLASS_CALL6(LogCategoryPtr, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6)
#define A_LOG_CLASS_CALL7(LogCategoryPtr, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7)
#define A_LOG_CLASS_CALL8(LogCategoryPtr, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8)

#define A_LOG_DATA1(LogCategoryPtr, Arg1)
#define A_LOG_DATA2(LogCategoryPtr, Arg1, Arg2)
#define A_LOG_DATA3(LogCategoryPtr, Arg1, Arg2, Arg3)
#define A_LOG_DATA4(LogCategoryPtr, Arg1, Arg2, Arg3, Arg4)
#define A_LOG_DATA5(LogCategoryPtr, Arg1, Arg2, Arg3, Arg4, Arg5)
#define A_LOG_DATA6(LogCategoryPtr, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6)
#define A_LOG_DATA7(LogCategoryPtr, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7)
#define A_LOG_DATA8(LogCategoryPtr, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8)

#define A_LOG_CLASS_DATA1(LogCategoryPtr, Arg1)
#define A_LOG_CLASS_DATA2(LogCategoryPtr, Arg1, Arg2)
#define A_LOG_CLASS_DATA3(LogCategoryPtr, Arg1, Arg2, Arg3)
#define A_LOG_CLASS_DATA4(LogCategoryPtr, Arg1, Arg2, Arg3, Arg4)
#define A_LOG_CLASS_DATA5(LogCategoryPtr, Arg1, Arg2, Arg3, Arg4, Arg5)
#define A_LOG_CLASS_DATA6(LogCategoryPtr, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6)
#define A_LOG_CLASS_DATA7(LogCategoryPtr, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7)
#define A_LOG_CLASS_DATA8(LogCategoryPtr, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8)

#define A_LOG_ENABLED(LogCategoryPtr)

#define A_FMT(...)

// class_logging_macros.hpp

#define A_CLASS_MSG(Message)
#define A_CLASS_STATIC_MSG(Message)

#define A_CLASS_DURATION(Message)
#define A_CLASS_STATIC_DURATION(Message)

#define A_CLASS_CALL()
#define A_CLASS_CALL1(Arg1)
#define A_CLASS_CALL2(Arg1, Arg2)
#define A_CLASS_CALL3(Arg1, Arg2, Arg3)
#define A_CLASS_CALL4(Arg1, Arg2, Arg3, Arg4)
#define A_CLASS_CALL5(Arg1, Arg2, Arg3, Arg4, Arg5)
#define A_CLASS_CALL6(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6)
#define A_CLASS_CALL7(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7)
#define A_CLASS_CALL8(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8)

#define A_CLASS_STATIC_CALL()
#define A_CLASS_STATIC_CALL1(Arg1)
#define A_CLASS_STATIC_CALL2(Arg1, Arg2)
#define A_CLASS_STATIC_CALL3(Arg1, Arg2, Arg3)
#define A_CLASS_STATIC_CALL4(Arg1, Arg2, Arg3, Arg4)
#define A_CLASS_STATIC_CALL5(Arg1, Arg2, Arg3, Arg4, Arg5)
#define A_CLASS_STATIC_CALL6(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6)
#define A_CLASS_STATIC_CALL7(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7)
#define A_CLASS_STATIC_CALL8(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8)

#define A_CLASS_DATA1(Arg1)
#define A_CLASS_DATA2(Arg1, Arg2)
#define A_CLASS_DATA3(Arg1, Arg2, Arg3)
#define A_CLASS_DATA4(Arg1, Arg2, Arg3, Arg4)
#define A_CLASS_DATA5(Arg1, Arg2, Arg3, Arg4, Arg5)
#define A_CLASS_DATA6(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6)
#define A_CLASS_DATA7(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7)
#define A_CLASS_DATA8(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8)

#define A_CLASS_STATIC_DATA1(Arg1)
#define A_CLASS_STATIC_DATA2(Arg1, Arg2)
#define A_CLASS_STATIC_DATA3(Arg1, Arg2, Arg3)
#define A_CLASS_STATIC_DATA4(Arg1, Arg2, Arg3, Arg4)
#define A_CLASS_STATIC_DATA5(Arg1, Arg2, Arg3, Arg4, Arg5)
#define A_CLASS_STATIC_DATA6(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6)
#define A_CLASS_STATIC_DATA7(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7)
#define A_CLASS_STATIC_DATA8(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8)

// class_member_macros.hpp

#define A_DECLARE_CLASS_MEMBERS(ClassType)
#define A_DEFINE_CLASS_MEMBERS(ClassType)
#define A_DEFINE_CLASS_AS_MEMBERS(ClassType, ClassName)

// thread_macros.hpp
//
#define A_REGISTER_THREAD(Name, Priority)

#endif // DEV_TOOLS_NOOP_H
