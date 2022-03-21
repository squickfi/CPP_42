#pragma once

#include <iostream>

class Karen {

	public:

		enum _level {
			_debug = 0,
			_info,
			_warning,
			_error,
			_notsignificant = -1
		};	
		void complain( std::string level );

	private:
	
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};