#pragma once
#include <windows.h> // GetCurrentDirectory() 사용시 必
#include <string>
//#include <cstring> // malloc() 사용시 必

std::string getFileName() {
	std::string answer_path;
	char* tmp_path;
	unsigned long pathLen = GetCurrentDirectoryA(0, NULL); // 現 프로젝트 경로 문자열의 길이

	tmp_path = (char*)malloc((unsigned long)pathLen + 1); // 메모리 동적 할당

	if (GetCurrentDirectoryA(pathLen, tmp_path) > 0) // 함수 무결성 체크
		answer_path = tmp_path; // string화

	free(tmp_path); // 동적 할당 해제

	// string형 최종 경로
	for (int i = 0; i < answer_path.length(); i++) {
		if (answer_path[i] == '\\') {
			answer_path.insert(i, "\\");
			i++;
		}
	}

	return answer_path;
}