# cpp-trading-bot
A C++ algorithmic trading bot for trading European Options.

Contains an add-on module with an "order gateway" that takes in input and outputs them with compiler optimizations.
Mainly used for banchmarking and testing against other methods of ingestion and data processing.

Currently working on a custom data structure for use in order ingestion, which is still in testing and development phases.
The custom datastructure will attempt to have the properties of a priority-queue and circular buffer, to efficiently perform operations and calculations on the order while in pending states.

Many parts of the project are visible available on the public repo.
