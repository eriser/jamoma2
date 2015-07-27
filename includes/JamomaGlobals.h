/** @file

	@ingroup jamoma2

	@brief #JamomaGlobals.h defines global vars and singletons required for core functionality.

	@details #JamomaGlobals.h must be included in exactly one file of a given binary.

	@author Timothy Place

	@copyright Copyright © 2015 by Jamoma authors and contributors @n
	This code is licensed under the terms of the "BSD 3-Clause License" @n
	https://github.com/jamoma/jamoma2/blob/master/LICENSE.md @n
 */

#pragma once


namespace Jamoma {

	// TODO: this must be initialized out of line because it is essentially a global and it's presence here will lead to multiple symbol tables.
	// TODO: ultimately we could have two headers "jamoma.h" is everything and "jamoma-ext.h" which does not contain globals.
	size_t Symbol::sInstanceCounter = 0;

	SymbolTable sSymbolTable;
	
}  // namespace Jamoma

