#pragma once

#include <Phrases.h>

Phrases::Phrases(){
	makeDatabases("assets/phrases.json");
}

std::wstring Phrases::getPhrase(){
	std::string s = replaceWords("*phrase*");
	return std::wstring(s.begin(), s.end());
}

std::wstring Phrases::getFirstLine(){
	std::string s = replaceWords("*firstLine*");
	return std::wstring(s.begin(), s.end());
}