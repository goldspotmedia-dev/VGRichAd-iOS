//
//  VGRConsts.h
//  meteor
//
//  Created by   on 2016/04/20.
//  Copyright © 2016年 GoldSpot Media Inc. All rights reserved.
//

#pragma mark - MovieView Status

typedef enum {
  kVGR_ControllMode_Playing = 0,
  kVGR_ControllMode_Pausing,
  kVGR_ControllMode_StillFrame,
  kVGR_ControllMode_PlayEnd,
  kVGR_ControllMode_NotPlayed  // for AVViewFooter indicate ad prepared but not
                               // played yet.
} VGR_CONTROLL_MODE;

#pragma mark - ErrorCode

typedef enum {
  kVGR_Error_Unknown = 0,
  kVGR_Error_IncorrectParameter,
  kVGR_Error_Disconnected,
  kVGR_Error_Timeout,
  kVGR_Error_NotPrepare,
  kVGR_Error_Parse,
  kVGR_Error_File_Save,
  kVGR_Error_File_Load,
  kVGR_Error_Download_Cancel,
  kVGR_Error_Download_Failed
} VGR_ERROR_CODE;


typedef enum {
  kVGR_VAST_Error_XML_Parsing = 100,
  kVGR_VAST_Error_Schema_Validation = 101,
  kVGR_VAST_Error_Version = 102,
  kVGR_VAST_Error_Trafficking = 200,
  kVGR_VAST_Error_Different_Linear = 201,
  kVGR_VAST_Error_Different_Duraiton = 202,
  kVGR_VAST_Error_Different_Size = 203,
  kVGR_VAST_Error_Wrapper_General = 300,
  kVGR_VAST_Error_Wrapper_Timeout = 301,
  kVGR_VAST_Error_Wrapper_NoAd = 302,
  kVGR_VAST_Error_Linear_General = 400,
  kVGR_VAST_Error_Linear_FileNotFound = 401,
  kVGR_VAST_Error_Linear_Timeout = 402,
  kVGR_VAST_Error_Linear_unspupportedType = 403,
  kVGR_VAST_Error_Linear_Displaying = 405,
  kVGR_VAST_Error_NonLinear_General = 500,
  kVGR_VAST_Error_NonLinear_Displaying = 501,
  kVGR_VAST_Error_NonLinear_FetchResource = 502,
  kVGR_VAST_Error_NonLinear_unspupportedType = 503,
  kVGR_VAST_Error_Companion_General = 600,
  kVGR_VAST_Error_Companion_Displaying = 601,
  kVGR_VAST_Error_Companion_RequiredNothing = 602,
  kVGR_VAST_Error_Companion_FetchResource = 603,
  kVGR_VAST_Error_Companion_unspupportedType = 604,
  kVGR_VAST_Error_Undefined = 900,
  kVGR_VAST_Error_VPAID_GENRAL = 901
} VGR_VAST_ERROR_CODE;

#define kVGR_ErrorDomain @"com.voyagegroup.gsm.vgrichad"