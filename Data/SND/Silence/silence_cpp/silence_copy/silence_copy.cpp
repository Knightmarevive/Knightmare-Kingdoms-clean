// silence_copy.cpp : Defines the entry point for the console application.
//
#include <windows.h>
#include <sstream>

int main()
{
	
	for (int i = 197; i <= 999; i++) {
		{
			std::stringstream arg;
			arg << "copy /Y ..\\..\\silence.wav ..\\..\\..\\s" << i << "attk.82m";
			system( arg.str().c_str() );
		}

		{
			std::stringstream arg;
			arg << "copy /Y ..\\..\\silence.wav ..\\..\\..\\s" << i << "dfnd.82m";
			system(arg.str().c_str());
		}

		{
			std::stringstream arg;
			arg << "copy /Y ..\\..\\silence.wav ..\\..\\..\\s" << i << "kill.82m";
			system(arg.str().c_str());
		}

		{
			std::stringstream arg;
			arg << "copy /Y ..\\..\\silence.wav ..\\..\\..\\s" << i << "move.82m";
			system(arg.str().c_str());
		}

		{
			std::stringstream arg;
			arg << "copy /Y ..\\..\\silence.wav ..\\..\\..\\s" << i << "shot.82m";
			system(arg.str().c_str());
		}

		{
			std::stringstream arg;
			arg << "copy /Y ..\\..\\silence.wav ..\\..\\..\\s" << i << "wnce.82m";
			system(arg.str().c_str());
		}

	}
	return 0;
}

