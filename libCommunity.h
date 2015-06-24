// Copyright 2015, Harry <daniel.h.peter@gmail.com>

// This file is part of libcommunity.
//
// libcommunity is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// libcommunity is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with libcommunity.  If not, see <http://www.gnu.org/licenses/>.

#ifndef LIBCOMMUNITY_H_
#define LIBCOMMUNITY_H_

// Creates a new Member (Not yet implemented).
void createMember(name name, int age, sex sex, date birthday);

// Give a Task to a Member (Not yet implemented).
void giveTask(member member, task task);

// Write a members Name in a list (Not yet implemented).
void writeMemberToList(member* member, list* list);

#endif  // LIBCOMMUNITY_H_
