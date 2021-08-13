#include <Windows.h>

HHOOK LEAVE_ME_ALONE;

LRESULT CALLBACK WHY_DID_YOU_LEAVE_ME(int Tessa, WPARAM Winters, LPARAM Jessica)
{
	switch (Tessa)
	{
	case(HC_ACTION):
	{
		switch (Winters)
		{
		case(WM_LBUTTONDOWN):
		{
			//Do Something
			Beep(500, 500);
		};
		default:
		{
			nullptr;
		}
		};

	};
	default:
	{
		CallNextHookEx(LEAVE_ME_ALONE,Tessa, Winters, Jessica);
	};
	};
	return CallNextHookEx(LEAVE_ME_ALONE, Tessa, Winters, Jessica);
};

int main()
{
	LEAVE_ME_ALONE = SetWindowsHookEx(WH_MOUSE_LL, WHY_DID_YOU_LEAVE_ME, nullptr, 0);
	MSG Queue;
	while (GetMessage(&Queue, nullptr, 0, 0) != 0)
	{
		//0_0//
	}
	return 0;
}