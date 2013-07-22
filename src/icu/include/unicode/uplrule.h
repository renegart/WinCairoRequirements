/*
******************************************************************************
* Copyright (C) 2010 Apple Inc. All Rights Reserved.
******************************************************************************
*/

#ifndef UPLRULE_H
#define UPLRULE_H

#include "unicode/utypes.h"

#if !UCONFIG_NO_FORMATTING

struct UPluralRules;
/**
 * A UPluralRules object for use in C programs.
 * @internal
 */
typedef struct UPluralRules UPluralRules;

/**
 * Open a new UPluralRules object using the predefined plural rules for a
 * given locale.
 * @param locale The locale for which the rules are desired.
 * @param status A pointer to a UErrorCode to receive any errors.
 * @return A UPluralRules for the specified locale, or 0 if an error occurred.
 * @internal
 */
U_INTERNAL UPluralRules* U_EXPORT2
uplrule_open(const char *locale,
             UErrorCode *status);

/**
 * Close a UPluralRules object. Once closed it may no longer be used.
 * @param plrules The UPluralRules object to close.
 * @internal
 */
U_INTERNAL void U_EXPORT2
uplrule_close(UPluralRules *plrules);

/**
 * Given an int32_t number, returns the keyword of the first rule that
 * applies to the number, according to the supplied UPluralRules object.
 * @param plrules The UPluralRules object specifying the rules.
 * @param number The number for which the rule has to be determined.
 * @param keyword The keyword of the rule that applies to number.
 * @param capacity The capacity of keyword.
 * @param status A pointer to a UErrorCode to receive any errors.
 * @return The length of keyword.
 * @internal
 */
U_INTERNAL int32_t U_EXPORT2
uplrule_select(const UPluralRules *plrules,
               int32_t number,
               UChar *keyword, int32_t capacity,
               UErrorCode *status);

/**
 * Given a double number, returns the keyword of the first rule that
 * applies to the number, according to the supplied UPluralRules object.
 * @param plrules The UPluralRules object specifying the rules.
 * @param number The number for which the rule has to be determined.
 * @param keyword The keyword of the rule that applies to number.
 * @param capacity The capacity of keyword.
 * @param status A pointer to a UErrorCode to receive any errors.
 * @return The length of keyword.
 * @internal
 */
U_INTERNAL int32_t U_EXPORT2
uplrule_selectDouble(const UPluralRules *plrules,
                     double number,
                     UChar *keyword, int32_t capacity,
                     UErrorCode *status);

#endif /* #if !UCONFIG_NO_FORMATTING */

#endif
