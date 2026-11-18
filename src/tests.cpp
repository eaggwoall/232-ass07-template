#ifndef UNITY_H
#define UNITY_H
#include "unity.h"
#endif

#include "code.hpp"
#include <cmath>
#include <iostream>
#include <numbers>

// ============================================================
// PART 1 Tests: Shapes
// ============================================================

/// Create Circle(1), Square(2), Rectangle(2, 3).
/// Verify area() is pi, 4 and 6 (compare doubles with std::fabs(a - b) < 1e-9).
void test_shape_areas(void)
{
    Circle c(1);
    Square s(2);
    Rectangle r(2, 3);

    TEST_ASSERT_TRUE_MESSAGE(std::fabs(c.area() - std::numbers::pi) < 1e-9, "Circle area is incorrect");
    TEST_ASSERT_TRUE_MESSAGE(std::fabs(s.area() - 4.0) < 1e-9, "Square area is incorrect");
    TEST_ASSERT_TRUE_MESSAGE(std::fabs(r.area() - 6.0) < 1e-9, "Rectangle area is incorrect");
}

/// Create an array of three Shape* (a Circle, a Square, a Rectangle) with new.
/// Verify name() through the BASE pointer gives "Circle", "Square", "Rectangle".
/// Delete the shapes through the base pointers.
void test_shape_names_through_base_pointer(void)
{
    Shape *shapes[3] = { new Circle(1), new Square(2), new Rectangle(2, 3) };

    TEST_ASSERT_TRUE_MESSAGE(shapes[0]->name() == "Circle", "First shape name is incorrect");
    TEST_ASSERT_TRUE_MESSAGE(shapes[1]->name() == "Square", "Second shape name is incorrect");
    TEST_ASSERT_TRUE_MESSAGE(shapes[2]->name() == "Rectangle", "Third shape name is incorrect");

    delete shapes[0];
    delete shapes[1];
    delete shapes[2];
}

/// Create Square(1) and Square(2). Take two const Shape& to them.
/// Verify small < big is true, big < small is false, small < small is false.
void test_shape_operator_less(void)
{
    TEST_ASSERT_TRUE_MESSAGE(0, "TODO: Implement this test");
}

/// Create Square(2) and Rectangle(1, 4): both have area 4.
/// Verify that NEITHER a < b NOR b < a is true.
void test_shape_equal_area_not_less(void)
{
    TEST_ASSERT_TRUE_MESSAGE(0, "TODO: Implement this test");
}

// ============================================================
// PART 2 Tests: ShapeList
// ============================================================

/// Create a ShapeList. Add new Circle(1) and new Square(2) with addShape.
/// Verify both calls return 0 and length() is 2.
/// (Do NOT delete the shapes yourself: the list owns them.)
void test_list_add_and_length(void)
{
    TEST_ASSERT_TRUE_MESSAGE(0, "TODO: Implement this test");
}

/// Create a ShapeList. Call addShape(nullptr).
/// Verify it returns -1 and length() stays 0.
void test_list_add_null_guard(void)
{
    TEST_ASSERT_TRUE_MESSAGE(0, "TODO: Implement this test");
}

/// Add Rectangle(2, 5) (area 10), Circle(1) (area 3.14), Square(2) (area 4).
/// Call insertionSort(). Verify nameAt(0), nameAt(1), nameAt(2) are
/// "Circle", "Square", "Rectangle" and isSorted() is true.
void test_insertionSort_orders_by_area(void)
{
    TEST_ASSERT_TRUE_MESSAGE(0, "TODO: Implement this test");
}

/// Call insertionSort() on an EMPTY list: no crash, length() is 0.
/// Then add ONE shape and sort again: length() is 1 and nameAt(0) is unchanged.
void test_insertionSort_empty_and_single(void)
{
    TEST_ASSERT_TRUE_MESSAGE(0, "TODO: Implement this test");
}
