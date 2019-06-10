// Copyright (c) 2019 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=0b503069790b4b005c487b9e6ab91fdcc9fdc47d$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_TEST_TRANSLATOR_TEST_SCOPED_CLIENT_CHILD_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_TEST_TRANSLATOR_TEST_SCOPED_CLIENT_CHILD_CPPTOC_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/test/cef_translator_test_capi.h"
#include "include/test/cef_translator_test.h"
#include "libcef_dll/cpptoc/cpptoc_scoped.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefTranslatorTestScopedClientChildCppToC
    : public CefCppToCScoped<CefTranslatorTestScopedClientChildCppToC,
                             CefTranslatorTestScopedClientChild,
                             cef_translator_test_scoped_client_child_t> {
 public:
  CefTranslatorTestScopedClientChildCppToC();
  virtual ~CefTranslatorTestScopedClientChildCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_TEST_TRANSLATOR_TEST_SCOPED_CLIENT_CHILD_CPPTOC_H_