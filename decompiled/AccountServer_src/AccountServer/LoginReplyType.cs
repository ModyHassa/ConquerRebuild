namespace AccountServer;

public enum LoginReplyType
{
	Invalid_AccountID_Or_Password = 1,
	Server_Is_Down = 10,
	Please_Try_Again_Later = 11,
	Account_Banned = 12,
	Server_Is_Busy = 20,
	Server_Is_Busy_Try_Again_Later = 21,
	Account_Locked_Maintenance = 22,
	Hardware_Banned = 25
}
