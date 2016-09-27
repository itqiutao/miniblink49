// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef StateOptions_h
#define StateOptions_h

#include "core/CoreExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class CORE_EXPORT StateOptions {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    StateOptions();

    bool hasScrollRestoration() const { return !m_scrollRestoration.isNull(); }
    String scrollRestoration() const { return m_scrollRestoration; }
    void setScrollRestoration(String value) { m_scrollRestoration = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    String m_scrollRestoration;

    friend class V8StateOptions;
};

} // namespace blink

#endif // StateOptions_h