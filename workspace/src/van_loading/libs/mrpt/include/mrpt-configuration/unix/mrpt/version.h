/* +---------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)               |
   |                          https://www.mrpt.org/                            |
   +---------------------------------------------------------------------------+ */
#ifndef  MRPT_VERSION_H
#define  MRPT_VERSION_H

const char MRPT_version_str[]    = "MRPT 1.9.9";
/** Version number of package in hexadecimal:
  * A three digits version code, eg. 0.5.1 -> 0x051,  1.2.0 -> 0x120 */
#define MRPT_VERSION 0x199

// See specs: https://reproducible-builds.org/specs/source-date-epoch/
const char MRPT_SOURCE_DATE_EPOCH[] = "1554908868";

const char MRPT_CMAKE_SOURCE_DIR[]     = "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt";
const char MRPT_CMAKE_INSTALL_PREFIX[] = "/usr/local";
		
#endif
