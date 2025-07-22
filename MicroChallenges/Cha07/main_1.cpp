#include <iostream>
#include <string>
using namespace std;

struct Request {
    string name;
    string lastname;
    string course;
};

struct Course {
    string id;
    int count;
};

int main() {
    int requests;
    cin >> requests;

    Request all_requests[100000];
    int unique_request_count = 0;

    // Read and store only unique requests
    for (int i = 0; i < requests; i++) {
        string name, lastname, course;
        cin >> name >> lastname >> course;

        bool duplicate = false;

        // Check if this request is a duplicate
        for (int j = 0; j < unique_request_count; j++) {
            if (all_requests[j].name == name &&
                all_requests[j].lastname == lastname &&
                all_requests[j].course == course) {
                duplicate = true;
                break;
            }
        }

        // If not a duplicate, add it
        if (!duplicate) {
            all_requests[unique_request_count].name = name;
            all_requests[unique_request_count].lastname = lastname;
            all_requests[unique_request_count].course = course;
            unique_request_count++;
        }
    }

    // Count how many students requested each course
    Course courses[100000];
    int course_count = 0;

    for (int i = 0; i < unique_request_count; i++) {
        string course_name = all_requests[i].course;
        bool found = false;

        for (int j = 0; j < course_count; j++) {
            if (courses[j].id == course_name) {
                courses[j].count++;
                found = true;
                break;
            }
        }

        if (!found) {
            courses[course_count].id = course_name;
            courses[course_count].count = 1;
            course_count++;
        }
    }

    // Sort courses lexicographically (bubble sort)
    for (int i = 0; i < course_count - 1; i++) {
        for (int j = i + 1; j < course_count; j++) {
            if (courses[i].id > courses[j].id) {
                Course temp = courses[i];
                courses[i] = courses[j];
                courses[j] = temp;
            }
        }
    }

    // Output the result
    for (int i = 0; i < course_count; i++) {
        cout << courses[i].id << " " << courses[i].count << endl;
    }

    return 0;
}