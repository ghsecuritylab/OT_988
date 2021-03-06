/* ------------------------------------------------------------------
 * Copyright (C) 1998-2009 PacketVideo
 * Copyright (c) 2009, Code Aurora Forum. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 * -------------------------------------------------------------------
 */
#ifndef GPP_QCELPDECODERSPECIFICINFO_H_INCLUDED
#define GPP_QCELPDECODERSPECIFICINFO_H_INCLUDED

#ifndef OSCL_STRING_CONTAINERS_H_INCLUDED
#include "oscl_string_containers.h"
#endif

#ifndef ATOM_H_INCLUDED
#include "atom.h"
#endif

#ifndef ATOMDEFS_H_INCLUDED
#include "atomdefs.h"
#endif

#ifndef DECODERSPECIFICINFO_H_INCLUDED
#include "decoderspecificinfo.h"
#endif


class QCELPSpecificAtom : public Atom
{

    public:
        QCELPSpecificAtom(MP4_FF_FILE *fp, uint32 size, uint32 type); // Default constructor
        virtual ~QCELPSpecificAtom() {}; // Destructor

        uint32 getVendorcode()
        {
            return _VendorCode;
        }
        uint8  getDecoderVersion()
        {
            return _decoder_version;
        }
        uint8  getFramesPerSample()
        {
            return _frames_per_sample;
        }

    private:
        uint32        _VendorCode;
        uint8         _decoder_version;
        uint8         _frames_per_sample;
};

#endif // GPP_QCELPDECODERSPECIFICINFO_H_INCLUDED
