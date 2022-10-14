#pragma once
#include <windows.h> // GetCurrentDirectory() ���� ��
#include <string>
//#include <cstring> // malloc() ���� ��

std::string getFileName() {
	std::string answer_path;
	char* tmp_path;
	unsigned long pathLen = GetCurrentDirectoryA(0, NULL); // �� ������Ʈ ��� ���ڿ��� ����

	tmp_path = (char*)malloc((unsigned long)pathLen + 1); // �޸� ���� �Ҵ�

	if (GetCurrentDirectoryA(pathLen, tmp_path) > 0) // �Լ� ���Ἲ üũ
		answer_path = tmp_path; // stringȭ

	free(tmp_path); // ���� �Ҵ� ����

	// string�� ���� ���
	for (int i = 0; i < answer_path.length(); i++) {
		if (answer_path[i] == '\\') {
			answer_path.insert(i, "\\");
			i++;
		}
	}

	return answer_path;
}