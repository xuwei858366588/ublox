//
// Copyright 2015 - 2017 (C). Alex Robenko. All rights reserved.
//

// This file is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

/// @file
/// @brief Contains definition of AID-AOP (<b>poll SV</b>) message and its fields.

#pragma once

#include "ublox/Message.h"

#include "ublox/field/aid.h"

namespace ublox
{

namespace message
{

/// @brief Accumulates details of all the AID-AOP (<b>poll SV</b>) message fields.
/// @see AidAopPollSv
struct AidAopPollSvFields
{
    /// @brief Definition of "svid" field.
    using svid = field::aid::svid;

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        svid
    >;
};

/// @brief Definition of AID-AOP (<b>poll SV</b>) message
/// @details Inherits from @b comms::MessageBase
///     while providing @b TMsgBase as common interface class as well as
///     various implementation options. @n
///     See @ref AidAopPollSvFields and for definition of the fields this message contains
///         and COMMS_MSG_FIELDS_ACCESS() for fields access details.
/// @tparam TMsgBase Common interface class for all the messages.
template <typename TMsgBase = Message>
class AidAopPollSv : public
    comms::MessageBase<
        TMsgBase,
        comms::option::StaticNumIdImpl<MsgId_AID_AOP>,
        comms::option::FieldsImpl<AidAopPollSvFields::All>,
        comms::option::MsgType<AidAopPollSv<TMsgBase> >
    >
{
    typedef comms::MessageBase<
        TMsgBase,
        comms::option::StaticNumIdImpl<MsgId_AID_AOP>,
        comms::option::FieldsImpl<AidAopPollSvFields::All>,
        comms::option::MsgType<AidAopPollSv<TMsgBase> >
    > Base;
public:

    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The field names are:
    ///     @li @b svid for @ref AidAopPollSvFields::svid field
    COMMS_MSG_FIELDS_ACCESS(svid);

    /// @brief Default constructor
    AidAopPollSv() = default;

    /// @brief Copy constructor
    AidAopPollSv(const AidAopPollSv&) = default;

    /// @brief Move constructor
    AidAopPollSv(AidAopPollSv&& other) = default;

    /// @brief Destructor
    ~AidAopPollSv() = default;

    /// @brief Copy assignment
    AidAopPollSv& operator=(const AidAopPollSv&) = default;

    /// @brief Move assignment
    AidAopPollSv& operator=(AidAopPollSv&&) = default;
};

}  // namespace message

}  // namespace ublox





