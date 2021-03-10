#include "doctest.h"
#include "snowman.hpp"
#include <string>
#include <iostream>

TEST_CASE("test1") {
	// HNLRXYTB
	
	// HHHHH
	// HHHHH
	//X(LNR)Y
	//X(TTT)Y
	// (BBB)
	
	
	//     _
	//    /_\
	//  \(o_O)
	//   (] [)>
	//   (   )
	CHECK(ariel::snowman( 33232124).find("  _  ") != std::string::npos);
	CHECK(ariel::snowman( 33232124).find(' /_\ ') != std::string::npos);
	CHECK(ariel::snowman( 33232124).find("\(o_O) ") != std::string::npos);
	CHECK(ariel::snowman( 33232124).find("(] [)>") != std::string::npos);
	CHECK(ariel::snowman( 33232124).find("(   )") != std::string::npos);
	CHECK(ariel::snowman( 33232124).find("_===_") == std::string::npos);
	CHECK(ariel::snowman( 33232124).find("\(o.o)/") == std::string::npos);
	CHECK(ariel::snowman( 33232124).find("( : )") == std::string::npos);
	CHECK(ariel::snowman( 33232124).find('(" ")') == std::string::npos);
	CHECK(ariel::snowman( 33232124).find('(":")') == std::string::npos);
	
	//   ___ 
	//  (_*_)
	// <(-.-)>
	// <(> <)>
	//  (___)
	CHECK(ariel::snowman( 42441133).find(" ___ ") != std::string::npos);
	CHECK(ariel::snowman( 42441133).find("(_*_)") != std::string::npos);
	CHECK(ariel::snowman( 42441133).find("<(-.-)>") != std::string::npos);
	CHECK(ariel::snowman( 42441133).find("<(> <)>") != std::string::npos);
	CHECK(ariel::snowman( 42441133).find("(___)") != std::string::npos);
	CHECK(ariel::snowman( 42441133).find("_===_") == std::string::npos);
	CHECK(ariel::snowman( 42441133).find(".....") == std::string::npos);
	CHECK(ariel::snowman( 42441133).find(",") == std::string::npos);
	CHECK(ariel::snowman( 42441133).find("O") == std::string::npos);
	CHECK(ariel::snowman( 42441133).find("o") == std::string::npos);
	CHECK(ariel::snowman( 42441133).find("/") == std::string::npos);
	
}