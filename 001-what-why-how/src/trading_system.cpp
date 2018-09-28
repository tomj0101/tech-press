#include <iostream>
/*Author: Tomas*/
using namespace std;

class MarketSummary {
public:
	double open, high, low, mkt_cap, pe_ratio;
	string symbol;
};
const int ERROR = 1;
const int SUCCESS = 0;

int main() {
	MarketSummary market_summary;

	market_summary.open = 1204.09;
	market_summary.high = 1208.45;
	market_summary.low = 1197.83;
	market_summary.mkt_cap = 834940000000.00;
	market_summary.pe_ratio = 32.42;
	market_summary.symbol = "GOOGL";

	cout << "Trading System :: Market summary" << endl;
	cout << "NASDAQ:" << market_summary.symbol << endl;
	cout << " | Open " << market_summary.open << endl;
	cout << " | High " << market_summary.high << endl;
	cout << " | Low " << market_summary.low << endl;
	cout << " | Mkt cap " << market_summary.mkt_cap << endl;
	cout << " | P/E ratio " << market_summary.pe_ratio << endl;
	return SUCCESS;
}
