// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8HTMLSelectElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/UnionTypesCore.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Element.h"
#include "bindings/core/v8/V8HTMLCollection.h"
#include "bindings/core/v8/V8HTMLElement.h"
#include "bindings/core/v8/V8HTMLFormElement.h"
#include "bindings/core/v8/V8HTMLOptGroupElement.h"
#include "bindings/core/v8/V8HTMLOptionElement.h"
#include "bindings/core/v8/V8HTMLOptionsCollection.h"
#include "bindings/core/v8/V8NodeList.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8ValidityState.h"
#include "core/HTMLNames.h"
#include "core/dom/ClassCollection.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/dom/NameNodeList.h"
#include "core/dom/NodeList.h"
#include "core/dom/StaticNodeList.h"
#include "core/dom/TagCollection.h"
#include "core/dom/custom/CustomElementProcessingStack.h"
#include "core/html/HTMLCollection.h"
#include "core/html/HTMLDataListOptionsCollection.h"
#include "core/html/HTMLFormControlsCollection.h"
#include "core/html/HTMLTableRowsCollection.h"
#include "core/html/LabelsNodeList.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8HTMLSelectElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8HTMLSelectElement::domTemplate, V8HTMLSelectElement::refObject, V8HTMLSelectElement::derefObject, V8HTMLSelectElement::trace, 0, 0, V8HTMLSelectElement::preparePrototypeObject, V8HTMLSelectElement::installConditionallyEnabledProperties, "HTMLSelectElement", &V8HTMLElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLSelectElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& HTMLSelectElement::s_wrapperTypeInfo = V8HTMLSelectElement::wrapperTypeInfo;

namespace HTMLSelectElementV8Internal {

static void autofocusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    v8SetReturnValueBool(info, impl->fastHasAttribute(HTMLNames::autofocusAttr));
}

static void autofocusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLSelectElementV8Internal::autofocusAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void autofocusAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "autofocus", "HTMLSelectElement", holder, info.GetIsolate());
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    bool cppValue = toBoolean(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->setBooleanAttribute(HTMLNames::autofocusAttr, cppValue);
}

static void autofocusAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLSelectElementV8Internal::autofocusAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void disabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    v8SetReturnValueBool(info, impl->fastHasAttribute(HTMLNames::disabledAttr));
}

static void disabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLSelectElementV8Internal::disabledAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void disabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "disabled", "HTMLSelectElement", holder, info.GetIsolate());
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    bool cppValue = toBoolean(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->setBooleanAttribute(HTMLNames::disabledAttr, cppValue);
}

static void disabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLSelectElementV8Internal::disabledAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void formAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->formOwner()), impl);
}

static void formAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLSelectElementV8Internal::formAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void multipleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    v8SetReturnValueBool(info, impl->multiple());
}

static void multipleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLSelectElementV8Internal::multipleAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void multipleAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "multiple", "HTMLSelectElement", holder, info.GetIsolate());
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    bool cppValue = toBoolean(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setMultiple(cppValue);
}

static void multipleAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    HTMLSelectElementV8Internal::multipleAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void nameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toImpl(holder);
    v8SetReturnValueString(info, impl->getNameAttribute(), info.GetIsolate());
}

static void nameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLSelectElementV8Internal::nameAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void nameAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::nameAttr, cppValue);
}

static void nameAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLSelectElementV8Internal::nameAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void requiredAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    v8SetReturnValueBool(info, impl->fastHasAttribute(HTMLNames::requiredAttr));
}

static void requiredAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLSelectElementV8Internal::requiredAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void requiredAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "required", "HTMLSelectElement", holder, info.GetIsolate());
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    bool cppValue = toBoolean(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->setBooleanAttribute(HTMLNames::requiredAttr, cppValue);
}

static void requiredAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLSelectElementV8Internal::requiredAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void sizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->size());
}

static void sizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLSelectElementV8Internal::sizeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void sizeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "size", "HTMLSelectElement", holder, info.GetIsolate());
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    unsigned cppValue = toUInt32(info.GetIsolate(), v8Value, NormalConversion, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setSize(cppValue);
}

static void sizeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    HTMLSelectElementV8Internal::sizeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void typeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    v8SetReturnValueString(info, impl->type(), info.GetIsolate());
}

static void typeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLSelectElementV8Internal::typeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void optionsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->options()), impl);
}

static void optionsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLSelectElementV8Internal::optionsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->length());
}

static void lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLSelectElementV8Internal::lengthAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void lengthAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "length", "HTMLSelectElement", holder, info.GetIsolate());
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    unsigned cppValue = toUInt32(info.GetIsolate(), v8Value, NormalConversion, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setLength(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void lengthAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    HTMLSelectElementV8Internal::lengthAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void selectedOptionsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->selectedOptions()), impl);
}

static void selectedOptionsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLSelectElementV8Internal::selectedOptionsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void selectedIndexAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    v8SetReturnValueInt(info, impl->selectedIndex());
}

static void selectedIndexAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLSelectElementV8Internal::selectedIndexAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void selectedIndexAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "selectedIndex", "HTMLSelectElement", holder, info.GetIsolate());
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    int cppValue = toInt32(info.GetIsolate(), v8Value, NormalConversion, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setSelectedIndex(cppValue);
}

static void selectedIndexAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    HTMLSelectElementV8Internal::selectedIndexAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void valueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    v8SetReturnValueString(info, impl->value(), info.GetIsolate());
}

static void valueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLSelectElementV8Internal::valueAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void valueAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setValue(cppValue);
}

static void valueAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    HTMLSelectElementV8Internal::valueAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void willValidateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    v8SetReturnValueBool(info, impl->willValidate());
}

static void willValidateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLSelectElementV8Internal::willValidateAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void validityAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->validity()), impl);
}

static void validityAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLSelectElementV8Internal::validityAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void validationMessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    v8SetReturnValueString(info, impl->validationMessage(), info.GetIsolate());
}

static void validationMessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLSelectElementV8Internal::validationMessageAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void labelsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->labels()), impl);
}

static void labelsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLSelectElementV8Internal::labelsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void itemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "item", "HTMLSelectElement", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(info.Holder());
    unsigned index;
    {
        index = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    v8SetReturnValueFast(info, WTF::getPtr(impl->item(index)), impl);
}

static void itemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HTMLSelectElementV8Internal::itemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(info.Holder());
    V8StringResource<> name;
    {
        name = info[0];
        if (!name.prepare())
            return;
    }
    v8SetReturnValueFast(info, WTF::getPtr(impl->namedItem(name)), impl);
}

static void namedItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HTMLSelectElementV8Internal::namedItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void addMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "add", "HTMLSelectElement", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(info.Holder());
    HTMLOptionElementOrHTMLOptGroupElement element;
    HTMLElementOrLong before;
    {
        V8HTMLOptionElementOrHTMLOptGroupElement::toImpl(info.GetIsolate(), info[0], element, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        if (!info[1]->IsUndefined()) {
            V8HTMLElementOrLongOrNull::toImpl(info.GetIsolate(), info[1], before, exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            /* null default value */;
        }
    }
    impl->add(element, before, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void addMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HTMLSelectElementV8Internal::addMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void remove1Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "remove", "HTMLSelectElement", info.Holder(), info.GetIsolate());
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(info.Holder());
    impl->remove(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void remove2Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "remove", "HTMLSelectElement", info.Holder(), info.GetIsolate());
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(info.Holder());
    int index;
    {
        index = toInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->remove(index);
}

static void removeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "remove", "HTMLSelectElement", info.Holder(), info.GetIsolate());
    switch (std::min(1, info.Length())) {
    case 0:
        if (true) {
            remove1Method(info);
            return;
        }
        break;
    case 1:
        if (true) {
            remove2Method(info);
            return;
        }
        break;
    default:
        break;
    }
    exceptionState.throwTypeError("No function was found that matched the signature provided.");
    exceptionState.throwIfNeeded();
    return;
}

static void removeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HTMLSelectElementV8Internal::removeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void checkValidityMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(info.Holder());
    v8SetReturnValueBool(info, impl->checkValidity());
}

static void checkValidityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HTMLSelectElementV8Internal::checkValidityMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void reportValidityMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(info.Holder());
    v8SetReturnValueBool(info, impl->reportValidity());
}

static void reportValidityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HTMLSelectElementV8Internal::reportValidityMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void setCustomValidityMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "setCustomValidity", "HTMLSelectElement", 1, info.Length()), info.GetIsolate());
        return;
    }
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(info.Holder());
    V8StringResource<> error;
    {
        error = info[0];
        if (!error.prepare())
            return;
    }
    impl->setCustomValidity(error);
}

static void setCustomValidityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HTMLSelectElementV8Internal::setCustomValidityMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(info.Holder());
    RefPtrWillBeRawPtr<Element> result = impl->item(index);
    if (!result)
        return;
    v8SetReturnValueFast(info, WTF::getPtr(result.release()), impl);
}

static void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMIndexedProperty");
    HTMLSelectElementV8Internal::indexedPropertyGetter(index, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void indexedPropertySetter(uint32_t index, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    HTMLSelectElement* impl = V8HTMLSelectElement::toImpl(info.Holder());
    HTMLOptionElement* propertyValue = V8HTMLOptionElement::toImplWithTypeCheck(info.GetIsolate(), v8Value);
    ExceptionState exceptionState(ExceptionState::IndexedSetterContext, "HTMLSelectElement", info.Holder(), info.GetIsolate());
    if (!propertyValue && !isUndefinedOrNull(v8Value)) {
        exceptionState.throwTypeError("The provided value is not of type 'HTMLOptionElement'.");
        exceptionState.throwIfNeeded();
        return;
    }
    bool result = impl->anonymousIndexedSetter(index, propertyValue, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (!result)
        return;
    v8SetReturnValue(info, v8Value);
}

static void indexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMIndexedProperty");
    HTMLSelectElementV8Internal::indexedPropertySetter(index, v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace HTMLSelectElementV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8HTMLSelectElementAccessors[] = {
    {"autofocus", HTMLSelectElementV8Internal::autofocusAttributeGetterCallback, HTMLSelectElementV8Internal::autofocusAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"disabled", HTMLSelectElementV8Internal::disabledAttributeGetterCallback, HTMLSelectElementV8Internal::disabledAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"form", HTMLSelectElementV8Internal::formAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"multiple", HTMLSelectElementV8Internal::multipleAttributeGetterCallback, HTMLSelectElementV8Internal::multipleAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"name", HTMLSelectElementV8Internal::nameAttributeGetterCallback, HTMLSelectElementV8Internal::nameAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"required", HTMLSelectElementV8Internal::requiredAttributeGetterCallback, HTMLSelectElementV8Internal::requiredAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"size", HTMLSelectElementV8Internal::sizeAttributeGetterCallback, HTMLSelectElementV8Internal::sizeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"type", HTMLSelectElementV8Internal::typeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"options", HTMLSelectElementV8Internal::optionsAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"length", HTMLSelectElementV8Internal::lengthAttributeGetterCallback, HTMLSelectElementV8Internal::lengthAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"selectedOptions", HTMLSelectElementV8Internal::selectedOptionsAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"selectedIndex", HTMLSelectElementV8Internal::selectedIndexAttributeGetterCallback, HTMLSelectElementV8Internal::selectedIndexAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"value", HTMLSelectElementV8Internal::valueAttributeGetterCallback, HTMLSelectElementV8Internal::valueAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"willValidate", HTMLSelectElementV8Internal::willValidateAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"validity", HTMLSelectElementV8Internal::validityAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"validationMessage", HTMLSelectElementV8Internal::validationMessageAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"labels", HTMLSelectElementV8Internal::labelsAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8HTMLSelectElementMethods[] = {
    {"item", HTMLSelectElementV8Internal::itemMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"namedItem", HTMLSelectElementV8Internal::namedItemMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"add", HTMLSelectElementV8Internal::addMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"remove", HTMLSelectElementV8Internal::removeMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"checkValidity", HTMLSelectElementV8Internal::checkValidityMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"reportValidity", HTMLSelectElementV8Internal::reportValidityMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"setCustomValidity", HTMLSelectElementV8Internal::setCustomValidityMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8HTMLSelectElementTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "HTMLSelectElement", V8HTMLElement::domTemplate(isolate), V8HTMLSelectElement::internalFieldCount,
        0, 0,
        V8HTMLSelectElementAccessors, WTF_ARRAY_LENGTH(V8HTMLSelectElementAccessors),
        V8HTMLSelectElementMethods, WTF_ARRAY_LENGTH(V8HTMLSelectElementMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    {
        v8::IndexedPropertyHandlerConfiguration config(HTMLSelectElementV8Internal::indexedPropertyGetterCallback, HTMLSelectElementV8Internal::indexedPropertySetterCallback, 0, 0, indexedPropertyEnumerator<HTMLSelectElement>);
        functionTemplate->InstanceTemplate()->SetHandler(config);
    }

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8HTMLSelectElement::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8HTMLSelectElementTemplate);
}

bool V8HTMLSelectElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8HTMLSelectElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLSelectElement* V8HTMLSelectElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8HTMLSelectElement::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<HTMLSelectElement>()->ref();
#endif
}

void V8HTMLSelectElement::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<HTMLSelectElement>()->deref();
#endif
}

} // namespace blink