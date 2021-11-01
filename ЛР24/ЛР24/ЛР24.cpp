#include <iostream>
#include <windows.h>
using namespace std;
HANDLE mutex;
HANDLE sobit[2];
HANDLE end_sobit;

DWORD WINAPI Scout(LPVOID lpParam) {
	int mes;
	WaitForSingleObject(mutex, INFINITE);
	if (WaitForSingleObject(end_sobit, 10) == WAIT_TIMEOUT) {
		cout << "Ввод специальных событий «1», «2»: \n";
		cin >> mes;
		cout << "Введено: " << mes << ".\n";
		if (mes != 1 && mes != 2) {
			cout << "Ошибка! Введите «1», «2»\n";
		}

		else SetEvent(sobit[(unsigned int)(mes - 0)]);
		ReleaseMutex(mutex);
		return 0;
	}
	else {
		ReleaseMutex(mutex);
		return 1;
	}

}

int main(int argc, char* argv[]) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int count = 0;

	cout << "Количество процессов Scout: ";
	cin >> count;

	cout << "Создано " << count << " процессов Scout:\n";
	for (int i = 0; i < 4; i++) {
		sobit[i] = CreateEventA(0, 0, 0, 0);
	}
	end_sobit = CreateEventA(0, 1, 0, 0);
	mutex = CreateMutexA(0, 1, 0);

	HANDLE* Threads = new HANDLE[count];
	for (int i = 0; i < count; i++) {
		Threads[i] = CreateThread(0, 0, Scout, 0, 0, 0);
	}
	ReleaseMutex(mutex);
	for (int i = 0; i < 2; i++) {
		WaitForMultipleObjects(4, sobit, 0, INFINITE);
		cout << "Сообщение " << i + 1 << " принято!\n";
		
	}
	cout << "Последующие сообщения блокированы с помощью mutex.";
	SetEvent(end_sobit);
	WaitForSingleObject(mutex, INFINITE);
	ResetEvent(end_sobit);
	delete[] Threads;
	ExitProcess(0);
}