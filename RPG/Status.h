#pragma once
struct Status
{
	int Hp, Mp, Atk, Mat, Def, Mde, Agl, Dex, Cri, Luck;
};
typedef enum Attebute
{
	Fire,Water,Tree,Light,Darkness
};
float AttebuteAdvantageous(int MyAttebute, int YouAtteboute)
{
	if (MyAttebute == YouAtteboute)
	{
		return 1;
	}
	else
	{
		if (MyAttebute <= Tree && YouAtteboute <= Tree)
		{
			int Jag = MyAttebute - YouAtteboute;
			if (Jag == 1)
			{
				return 1.5f;
			}
			else
			{
				return 0.5f;
			}
		}
		else if (MyAttebute <= Tree || YouAtteboute <= Tree)
		{
			return 1;

		}
		else
		{
			int Jag = MyAttebute - YouAtteboute;
			if (Jag == 1)
			{
				return 1.5f;
			}
			else
			{
				return 0.5f;
			}
		}
	}
}