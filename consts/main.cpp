void constExpressions() {
    {
        // Equal expressions. Const value.
        const int x = 5;
        int const y = 10;

        // Compile error.
        // x = 0;
        // y = 0;

        // int* px = &x;
        // int* py = &y;
    }

    {
        int x = 5;
        int y = 10;

        // Equal expressions. Non-const pointer on const value.
        const int* px = &x;
        int const* py = &y;

        // Compile error.
        // *px = 0;
        // *py = 0;

        px = nullptr;
        py = nullptr;
    }

    {
        int x = 5;

        // Const pointer on non-const value.
        int* const px = &x;

        *px = 0;

        // Compile error.
        // px = nullptr;
    }

    {
        int x = 5;
        int y = 10;

        // Equal expressions. Const pointer on const value.
        const int* const px = &x;
        int const* const py = &y;

        // Compile error.
        // px = nullptr;
        // py = nullptr;

        // *px = 0;
        // *py = 0;
    }

    {
        int x = 5;

        // Reference on non-const value.
        int& rx = x;
        int& ry = rx;

        rx = 0;
        ry = 1;
    }

    {
        int x = 5;
        int y = 10;

        // Equal expressions. Reference on const value.
        int const& rx = x;
        const int& ry = y;

        // Compile error.
        // rx = ry;
        // rx = 0;
    }
}

void constCasts() {
    {
        const int x = 10;

        // Compile error.
        // x = 0;

        int* px = const_cast<int*>(&x);

        // OK
        *px = 0;
    }

    {
        int x = 10;

        const int* px = const_cast<const int*>(&x);

        // Compile error.
        // *px = 0;
    }

    {
        const int x = 10;
        const int& crx = x;

        // Compile error.
        // crx = 0;

        int& rx = const_cast<int&>(x);

        // OK
        rx = 0;
    }

    {
        int x = 10;

        const int& rx = const_cast<const int&>(x);

        // Compile error.
        // rx = 0;
    }
}

int main() {
    constExpressions();
    constCasts();

    return 0;
}
