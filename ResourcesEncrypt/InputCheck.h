#pragma once
#ifndef __INPUT_CHECK_H_
#define __INPUT_CHECK_H_
#include <string>
#include <iostream>
#include <io.h>
#include <vector>
class InputCheck
{
public:
	InputCheck();
	InputCheck(std::vector<char*> parm);
	~InputCheck();
private:
	void inputDirectory(const bool isCin);
	void inputFileType(const bool isCin);
	bool isFileDirectory(const std::string path);
	void checkFils(const std::string path);
	void startEncrypt();
	bool _isFileDirectory;
	std::string _directory;
	std::string _fileType;
	std::vector<std::string> _files;
	std::vector<std::string> _spilts;
	size_t _isEncrypt;
};
#endif // __INPUT_CHECK_H_

