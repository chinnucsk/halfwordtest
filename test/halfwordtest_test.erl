-module(halfwordtest_test).
-include_lib("eunit/include/eunit.hrl").

all_test_() ->
    [fun run_test1/0, fun run_test2/0].

run_test1() ->
    case halfwordtest:run_test1() of
        1 -> ok;
        Else -> throw({invalid, Else})
    end.

run_test2() ->
    case halfwordtest:run_test2() of
        1 -> ok;
        Else -> throw({invalid, Else})
    end.
