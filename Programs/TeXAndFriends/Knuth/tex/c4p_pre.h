/**
 * @file c4p_pre.h
 * @author Christian Schenk
 * @brief C4P first things first
 *
 * @copyright Copyright © 2021-2022 Christian Schenk
 *
 * This file is free software; the copyright holder gives unlimited permission
 * to copy and/or distribute it, with or without modifications, as long as this
 * notice is preserved.
 */

#pragma once

#if _MSC_VER == 1800 || _MSC_VER == 1900
// workaround bug #2371 mathchoice in pdftex broken 
#  define C4P_NOOPT_mlisttohlist
#endif
