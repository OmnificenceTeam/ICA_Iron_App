﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_XPath_Expression1283317256.h"

// System.Xml.XPath.Expression
struct Expression_t1283317256;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprNEG
struct  ExprNEG_t1881334439  : public Expression_t1283317256
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprNEG::_expr
	Expression_t1283317256 * ____expr_0;

public:
	inline static int32_t get_offset_of__expr_0() { return static_cast<int32_t>(offsetof(ExprNEG_t1881334439, ____expr_0)); }
	inline Expression_t1283317256 * get__expr_0() const { return ____expr_0; }
	inline Expression_t1283317256 ** get_address_of__expr_0() { return &____expr_0; }
	inline void set__expr_0(Expression_t1283317256 * value)
	{
		____expr_0 = value;
		Il2CppCodeGenWriteBarrier(&____expr_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
