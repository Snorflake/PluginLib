#pragma once

struct ExampleData
{
	int ayylmao = 420;
	int kekekek = 69;
};


#define PLUGIN_ARGS ExampleData &k///< Change this so each plugin has a set arg
#define PLUGIN_EXECUTE_ARGS k ///< Change this to PLUGIN_ARGS without the declaration

/*!
This is the base class for every plugin
*/
class Plugin
{
public:
	Plugin();
	~Plugin();
	virtual void run(PLUGIN_ARGS) = 0;
};

