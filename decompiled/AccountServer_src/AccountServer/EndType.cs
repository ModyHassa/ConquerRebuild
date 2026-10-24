namespace AccountServer;

public enum EndType : uint
{
	c_endNone,
	c_endNormal,
	c_endRejoin,
	c_endGameServerKick,
	c_endAccountRejoinKick,
	c_endAccountOvertimeKick,
	c_endAccountCloseKick,
	c_endGameServerLose,
	c_endAll
}
