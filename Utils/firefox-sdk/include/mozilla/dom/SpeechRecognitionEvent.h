/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim:set ts=2 sw=2 sts=2 et cindent: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/* THIS FILE IS AUTOGENERATED FROM SpeechRecognitionEvent.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_SpeechRecognitionEvent_h
#define mozilla_dom_SpeechRecognitionEvent_h

#include "mozilla/Attributes.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/Event.h"
#include "mozilla/dom/SpeechRecognitionEventBinding.h"

struct JSContext;
namespace mozilla {
namespace dom {

class SpeechRecognitionEvent : public Event
{
public:
  NS_DECL_ISUPPORTS_INHERITED
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS_INHERITED(SpeechRecognitionEvent, Event)
protected:
  virtual ~SpeechRecognitionEvent();
  explicit SpeechRecognitionEvent(mozilla::dom::EventTarget* aOwner);

  uint32_t mResultIndex;
  RefPtr<SpeechRecognitionResultList> mResults;
  JS::Heap<JS::Value> mInterpretation;
  RefPtr<nsIDocument> mEmma;

public:
  virtual SpeechRecognitionEvent* AsSpeechRecognitionEvent() override;

  virtual JSObject* WrapObjectInternal(JSContext* aCx, JS::Handle<JSObject*> aGivenProto) override;

  static already_AddRefed<SpeechRecognitionEvent> Constructor(mozilla::dom::EventTarget* aOwner, const nsAString& aType, const SpeechRecognitionEventInit& aEventInitDict);

  static already_AddRefed<SpeechRecognitionEvent> Constructor(const GlobalObject& aGlobal, const nsAString& aType, const SpeechRecognitionEventInit& aEventInitDict, ErrorResult& aRv);

  uint32_t ResultIndex() const;

  SpeechRecognitionResultList* GetResults() const;

  void GetInterpretation(JSContext* cx, JS::MutableHandle<JS::Value> aRetVal) const;

  nsIDocument* GetEmma() const;
};

} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_SpeechRecognitionEvent_h