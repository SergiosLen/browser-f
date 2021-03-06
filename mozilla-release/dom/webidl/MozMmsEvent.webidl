/* -*- Mode: IDL; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/.
 */

[Pref="dom.sms.enabled",
 CheckAnyPermissions="sms",
 AvailableIn="CertifiedApps",
 Constructor(DOMString type, optional MozMmsEventInit eventInitDict)]
interface MozMmsEvent : Event
{
  readonly attribute MmsMessage? message;
};

dictionary MozMmsEventInit : EventInit
{
  MmsMessage? message = null;
};
