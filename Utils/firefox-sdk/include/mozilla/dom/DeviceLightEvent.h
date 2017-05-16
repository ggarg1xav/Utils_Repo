/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim:set ts=2 sw=2 sts=2 et cindent: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/* THIS FILE IS AUTOGENERATED FROM DeviceLightEvent.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_DeviceLightEvent_h
#define mozilla_dom_DeviceLightEvent_h

#include "mozilla/Attributes.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/DeviceLightEventBinding.h"
#include "mozilla/dom/Event.h"

struct JSContext;
namespace mozilla {
namespace dom {

class DeviceLightEvent : public Event
{
public:
  NS_DECL_ISUPPORTS_INHERITED
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS_INHERITED(DeviceLightEvent, Event)
protected:
  virtual ~DeviceLightEvent();
  explicit DeviceLightEvent(mozilla::dom::EventTarget* aOwner);

  double mValue;

public:
  virtual DeviceLightEvent* AsDeviceLightEvent() override;

  virtual JSObject* WrapObjectInternal(JSContext* aCx, JS::Handle<JSObject*> aGivenProto) override;

  static already_AddRefed<DeviceLightEvent> Constructor(mozilla::dom::EventTarget* aOwner, const nsAString& aType, const DeviceLightEventInit& aEventInitDict);

  static already_AddRefed<DeviceLightEvent> Constructor(const GlobalObject& aGlobal, const nsAString& aType, const DeviceLightEventInit& aEventInitDict, ErrorResult& aRv);

  double Value() const;
};

} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_DeviceLightEvent_h
