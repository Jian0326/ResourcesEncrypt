#pragma once
#ifndef __FILE_UTILS__H_
#define __FILE_UTILS__H_
#include <string>
class FileUtils
{
public:
	FileUtils();
	~FileUtils();
	static FileUtils *_ins;
	static FileUtils* getIns();
	long getFileSize(const char *path);
	unsigned char* getFileData(const char *path);
	unsigned char* getFileData(const char *path, bool forString);
	void WritableData(const char *path,const unsigned char* data,unsigned int size);
};
#endif // !__FILE_UTILS__H_
