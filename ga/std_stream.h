// $Header$
// Copyright (c) 2005 Matthew Wall, all rights reserved
// ----------------------------------------------------------------------------
#ifndef _ga_std_stream_h_
#define _ga_std_stream_h_

#include <ga/gaconfig.h>

#if defined(GALIB_USE_STREAMS)

#include <iostream>
#include <fstream>



#define STD_ISTREAM     std::istream
#define STD_OSTREAM     std::ostream
#define STD_IFSTREAM    std::ifstream
#define STD_OFSTREAM    std::ofstream
#define STD_IOS_IN      std::ios::in
#define STD_IOS_OUT     std::ios::out
#define STD_IOS_TRUNC   std::ios::trunc
#define STD_IOS_APP     std::ios::app
#define STD_IOS_BADBIT  std::ios::badbit
#define STD_ENDL        std::endl
#define STD_COUT        std::cout
#define STD_CERR        std::cerr


#endif

#endif
