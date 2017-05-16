/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim:set ts=2 sw=2 sts=2 et cindent: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/* THIS FILE IS AUTOGENERATED FROM TVCurrentSourceChangedEvent.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_TVCurrentSourceChangedEvent_h
#define mozilla_dom_TVCurrentSourceChangedEvent_h

#include "mozilla/Attributes.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/Event.h"
#include "mozilla/dom/TVCurrentSourceChangedEventBinding.h"

struct JSContext;
namespace mozilla {
namespace dom {

class TVCurrentSourceChangedEvent : public Event
{
public:
  NS_DECL_ISUPPORTS_INHERITED
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS_INHERITED(TVCurrentSourceChangedEvent, Event)
protected:
  virtual ~TVCurrentSourceChangedEvent();
  explicit TVCurrentSourceChangedEvent(mozilla::dom::EventTarget* aOwner);

  RefPtr<TVSource> mSource;

public:
  virtual TVCurrentSourceChangedEvent* AsTVCurrentSourceChangedEvent() override;

  virtual JSObject* WrapObjectInternal(JSContext* aCx, JS::Handle<JSObject*> aGivenProto) override;

  static already_AddRefed<TVCurrentSourceChangedEvent> Constructor(mozilla::dom::EventTarget* aOwner, const nsAString& aType, const TVCurrentSourceChangedEventInit& aEventInitDict);

  static already_AddRefed<TVCurrentSourceChangedEvent> Constructor(const GlobalObject& aGlobal, const nsAString& aType, const TVCurrentSourceChangedEventInit& aEventInitDict, ErrorResult& aRv);

  TVSource* GetSource() const;
};

} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_TVCurrentSourceChangedEvent_h
