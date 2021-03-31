/*******************************************************************************
/*                     O P E N  S O U R C E  --  T S + +                      **
/*******************************************************************************
 *
 *  @project       TS++
 *
 *  @file          TYPELIST.H
 *
 *  @authors       CCHyper
 *
 *  @brief         Type vector with save/load interface.
 *
 *  @license       TS++ is free software: you can redistribute it and/or
 *                 modify it under the terms of the GNU General Public License
 *                 as published by the Free Software Foundation, either version
 *                 3 of the License, or (at your option) any later version.
 *
 *                 TS++ is distributed in the hope that it will be
 *                 useful, but WITHOUT ANY WARRANTY; without even the implied
 *                 warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *                 PURPOSE. See the GNU General Public License for more details.
 *
 *                 You should have received a copy of the GNU General Public
 *                 License along with this program.
 *                 If not, see <http://www.gnu.org/licenses/>.
 *
 ******************************************************************************/
#pragma once

#include "always.h"
#include "vector.h"
#include <unknwn.h>
#include <cassert>


template<class T>
class TypeList : public DynamicVectorClass<T>
{
    public: // Needs to be public otherwise calls to Count() using a TypeList instance is not allowed.
        using DynamicVectorClass<T>::Count;
        using DynamicVectorClass<T>::Add;

    public:
        TypeList(unsigned size = 0, const T *array = nullptr);
        TypeList(const TypeList &that);
        TypeList(const NoInitClass &noinit) : DynamicVectorClass<T>(noinit) {}
        virtual ~TypeList() {}

        TypeList &operator=(const TypeList &that)
        {
            DynamicVectorClass<T>::operator=(that);
            field_18 = that.field_18;
            return (*this);
        }

    protected:
        int field_18;
};


template<class T>
TypeList<T>::TypeList(unsigned size, T const *array) :
    DynamicVectorClass<T>(size, array),
    field_18(0)
{
}


template<class T>
TypeList<T>::TypeList(const TypeList<T> &that) :
    DynamicVectorClass<T>(that),
    field_18(that.field_18)
{
}
