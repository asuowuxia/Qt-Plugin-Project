/*
 * Copyright (C) 2008-2017 The QXmpp developers
 *
 * Author:
 *  Manjeet Dahiya
 *  Niels Ole Salscheider
 *
 * Source:
 *  https://github.com/qxmpp-project/qxmpp
 *
 * This file is a part of QXmpp library.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 */


#ifndef QXMPPGLOBAL_H
#define QXMPPGLOBAL_H

#include <QString>

#define QXMPP_BUILD
#if defined(QXMPP_BUILD)
#    define QXMPP_EXPORT Q_DECL_EXPORT
#else
#    define QXMPP_EXPORT Q_DECL_IMPORT
#endif

#define QXMPP_AUTOTEST_EXPORT

/// This macro expands a numeric value of the form 0xMMNNPP (MM =
/// major, NN = minor, PP = patch) that specifies QXmpp's version
/// number. For example, if you compile your application against
/// QXmpp 1.2.3, the QXMPP_VERSION macro will expand to 0x010203.
///
/// You can use QXMPP_VERSION to use the latest QXmpp features where
/// available.
///

#define QXMPP_VERSION (0x@VERSION_MAJOR@ << 16) | (0x@VERSION_MINOR@ << 8) | 0x@VERSION_PATCH@

inline QLatin1String QXmppVersion()
{
    return QLatin1String("@VERSION_STRING@");
}

#endif //QXMPPGLOBAL_H

