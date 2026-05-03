#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"

// Test queue starts empty
TEST_CASE("Queue starts empty") {
    QueueTees queue;

    REQUIRE(queue.size() == 0);
}

// Test enqueue increases size
TEST_CASE("Enqueue increases size") {
    QueueTees queue;
    Puppy puppy;

    queue.enqueue(&puppy);

    REQUIRE(queue.size() == 1);
}

// Test FIFO behavior
TEST_CASE("Queue follows FIFO") {
    QueueTees queue;
    Puppy puppy;
    Kitty kitty;

    queue.enqueue(&puppy);
    queue.enqueue(&kitty);

    REQUIRE(queue.dequeue()->get_description() == "Pristine puppy");
}

// Test dequeue lowers size
TEST_CASE("Dequeue lowers size") {
    QueueTees queue;
    Puppy puppy;

    queue.enqueue(&puppy);
    queue.dequeue();

    REQUIRE(queue.size() == 0);
}

// Test empty dequeue returns nullptr
TEST_CASE("Empty dequeue returns nullptr") {
    QueueTees queue;

    REQUIRE(queue.dequeue() == nullptr);
}
