/**************************************************************************

    A/V Stream Camera Sample

    Copyright (c) 2014, Microsoft Corporation.

    File:

        CustomProperties.h

    Abstract:

        This file contains a definition used to demonstrate a custom property.

    History:

        created 10/10/2014

**************************************************************************/
#pragma once


#define STATIC_PROPSETID_VIDCAP_CUSTOM_CAMERACONTROL_MFT0 \
    0x452da6d7, 0xa42b, 0x4906, 0xa6, 0xc3, 0x81, 0x62, 0xe7, 0x2d, 0x38, 0x3d
DEFINE_GUIDSTRUCT("452da6d7-a42b-4906-a6c3-8162e72d383d", PROPSETID_VIDCAP_CUSTOM_CAMERACONTROL_MFT0);
#define PROPSETID_VIDCAP_CUSTOM_CAMERACONTROL_MFT0 DEFINE_GUIDNAMED(PROPSETID_VIDCAP_CUSTOM_CAMERACONTROL_MFT0)

typedef enum
{
    KSPROPERTY_CUSTOM_CAMERACONTROL_MFT0_VIDEOSTABILIZATION
} KSPROPERTY_CUSTOM_CAMERACONTROL_MFT0;

typedef struct
{
    BOOL     VideoStabilizationEnabled;
} KSPROPERTY_CUSTOM_CAMERACONTROL_MFT0_VIDEOSTABILIZATION_S, *PKSPROPERTY_CUSTOM_CAMERACONTROL_MFT0_VIDEOSTABILIZATION_S;

// {05DC8943-B9FB-4201-808F-6E91451C4760}
#define STATIC_PROPSETID_VIDCAP_CUSTOMCONTROL \
    0x5dc8943, 0xb9fb, 0x4201, 0x80, 0x8f, 0x6e, 0x91, 0x45, 0x1c, 0x47, 0x60
DEFINE_GUIDSTRUCT("05DC8943-B9FB-4201-808F-6E91451C4760", PROPSETID_VIDCAP_CUSTOMCONTROL );
#define PROPSETID_VIDCAP_CUSTOMCONTROL DEFINE_GUIDNAMED(PROPSETID_VIDCAP_CUSTOMCONTROL )

enum
{
    KSPROPERTY_CUSTOMCONTROL_DUMMY
};

// {570615F9-D924-42AC-B967-BE7B0E489965}
#define STATIC_PROPSETID_SENSOR_CUSTOMCONTROL \
    0x570615f9, 0xd924, 0x42ac, 0xb9, 0x67, 0xbe, 0x7b, 0xe, 0x48, 0x99, 0x65
DEFINE_GUIDSTRUCT("570615F9-D924-42AC-B967-BE7B0E489965", PROPSETID_SENSOR_CUSTOMCONTROL);
#define PROPSETID_SENSOR_CUSTOMCONTROL DEFINE_GUIDNAMED(PROPSETID_SENSOR_CUSTOMCONTROL )

enum
{
    KSPROPERTY_SENSOR_PIN_CUSTOM_CONTROL_ULONG=0
};

