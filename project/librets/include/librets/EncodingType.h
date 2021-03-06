/*
 * Copyright (C) 2008 National Association of REALTORS(R)
 *
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, and/or sell copies of the
 * Software, and to permit persons to whom the Software is furnished
 * to do so, provided that the above copyright notice(s) and this
 * permission notice appear in all copies of the Software and that
 * both the above copyright notice(s) and this permission notice
 * appear in supporting documentation.
 */

#ifndef LIBRETS_ENCODING_TYPE_H
#define LIBRETS_ENCODING_TYPE_H

/** 
 * @file EncodingType.h
 * Contains the EncodingType enum definition.
 */
namespace librets {

/**
 * EncodingType contains the definitions of which type of parsing the
 * XML parser will perform. Note that the RETS standard is supposed to be
 * US-ASCII, but there are non-compliant servers that provide data with
 * ISO or UNICODE values that will cause the XML parsing to fail. In 
 * those instances, use RETS_XML_ISO_ENCODING or RETS_XML_UTF8_ENCODING 
 * to tell the parser to handle those characters.
 */
enum EncodingType
{
    /**
     *The data is only encoded as US-ASCII.
     */
    RETS_XML_DEFAULT_ENCODING,
    /**
     * The data may contain extended characters.
     */
    RETS_XML_ISO_ENCODING,
    /**
     * The data may contain characters in UTF-8 encoding.
     */
    RETS_XML_UTF8_ENCODING
};
    
}

#endif /* LIBRETS_ENCODING_TYPE_H */

/* Local Variables: */
/* mode: c++ */
/* End: */
