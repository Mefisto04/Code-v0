while (!initialBoxes.empty() && foundOpenable) {
    foundOpenable = false;
    vector<int> nextBoxes;
    for (int boxId : initialBoxes) {
        if (vis[boxId]) {
            foundOpenable = true;
            nextBoxes.insert(end(nextBoxes), begin(containedBoxes[boxId]), end(containedBoxes[boxId]));
            for (int keyId : keys[boxId]) vis[keyId] = 1;
                totalCandies += candies[boxId];
            } else {
                nextBoxes.push_back(boxId);
            }
        }
        swap(initialBoxes, nextBoxes);
    }