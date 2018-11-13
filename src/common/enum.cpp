#include "enum.h"

namespace babeltrader
{ 

const char *g_markets[Market_Max] = {
	"",
	"ctp",
	"ib",
	"xtp",
	"okex",
	"bitmex"
};

const char *g_exchanges[Exchange_Max] = {
	"",
	"SHFE",
	"CZCE",
	"DCE",
	"CFFEX",
	"INE",
	"SSE",
	"SZSE",
	"CME",
	"CBOT",
	"NYMEX",
	"COMEX",
	"CBOE",
	"okex",
	"bitmex"
};

const char *g_product_types[ProductType_Max] = {
	"",
	"future",
	"option",
	"spot",
	"etf",
	"ipo"
};

const char *g_order_type[OrderType_Max] = {
	"",
	"limit",
	"market",
	"best"
};

const char *g_order_flag1[OrderFlag1_Max] = {
	"",
	"speculation",
	"arbitrage",
	"hedge",
	"marketmaker"
};

const char *g_order_action[OrderAction_Max] = {
	"",
	"open",
	"close",
	"closetoday",
	"closehistory",
	"forceclose",
	"buy",
	"sell",
	"borrow",
	"lend"
};

const char *g_order_dir[OrderDir_Max] = {
	"",
	"net",
	"long",
	"short"
};

const char *g_account_type[AccountType_Max] = {
	"",
	"normal",
	"credit",
	"derivatives"
};

const char *g_orderbookl2_action[OrderBookL2Action_Max] = {
	"",
	"entrust",
	"trade"
};

const char *g_orderbookl2_trade_flag[OrderBookL2TradeFlag_Max] = {
	"",
	"buy",
	"sell",
	"cancel",
	"deal"
};

}