/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim:set ts=2 sw=2 sts=2 et cindent: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_DeviceProximityEvent_h__
#define mozilla_dom_DeviceProximityEvent_h__

#include "mozilla/Attributes.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/DeviceProximityEventBinding.h"
#include "mozilla/dom/Event.h"

struct JSContext;

namespace mozilla {
namespace dom {

class DeviceProximityEvent : public Event
{
public:
  NS_DECL_ISUPPORTS_INHERITED
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS_INHERITED(DeviceProximityEvent, Event)
  virtual ~DeviceProximityEvent();
protected:
  DeviceProximityEvent(mozilla::dom::EventTarget* aOwner);

  double mValue;
  double mMin;
  double mMax;

public:
  virtual DeviceProximityEvent* AsDeviceProximityEvent();

  virtual JSObject* WrapObject(JSContext* aCx, JS::Handle<JSObject*> aScope) MOZ_OVERRIDE;

  static already_AddRefed<DeviceProximityEvent> Constructor(mozilla::dom::EventTarget* aOwner, const nsAString& aType, const DeviceProximityEventInit& aEventInitDict);

  static already_AddRefed<DeviceProximityEvent> Constructor(const GlobalObject& aGlobal, const nsAString& aType, const DeviceProximityEventInit& aEventInitDict, ErrorResult& aRv);

  double Value() const;

  double Min() const;

  double Max() const;

};

} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_DeviceProximityEvent_h__
