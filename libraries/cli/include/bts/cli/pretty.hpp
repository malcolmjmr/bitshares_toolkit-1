#pragma once

#include <bts/blockchain/account_record.hpp>
#include <bts/blockchain/asset_record.hpp>
#include <bts/blockchain/block_record.hpp>
#include <bts/blockchain/types.hpp>
#include <bts/client/client.hpp>
#include <bts/wallet/pretty.hpp>
#include <bts/wallet/wallet.hpp>

#include <fc/time.hpp>

#include <string>

namespace bts { namespace cli {

using namespace bts::blockchain;
using namespace bts::wallet;

typedef bts::client::client const * const cptr;

string pretty_line( int size, char c = '=' );
string pretty_shorten( const string& str, size_t max_size );
string pretty_timestamp( const time_point_sec& timestamp );
string pretty_age( const time_point_sec& timestamp );
string pretty_percent( double part, double whole, int precision = 2 );

string pretty_delegate_list( const vector<account_record>& delegate_records, cptr client );

string pretty_block_list( const vector<block_record>& block_records, cptr client );

string pretty_transaction_list( const vector<pretty_transaction>& transactions, cptr client );

string pretty_asset_list( const vector<asset_record>& asset_records, cptr client );

string pretty_account( const oaccount_record& record, cptr client );

string pretty_balances( const account_balance_summary_type& balances, cptr client );

string pretty_vote_summary( const account_vote_summary_type& votes );

string pretty_market_orders( const vector<market_order>& market_orders, cptr client );

} } // bts::cli
