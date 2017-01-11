def kmedoids(blogwords, k) :
    size = len(blogwords)
    medoids_idx = random.sample([i for i in range(size)], k)
    pre_cost, medoids = totalcost(blogwords,pearson_distance,medoids_idx)
    print pre_cost
    current_cost = 2.1 * size # maxmum of pearson_distances is 2.    
    best_choice = []
    best_res = {}
    iter_count = 0
    while 1 :
        for m in medoids :
            for item in medoids[m] :
                if item != m :
                    idx = medoids_idx.index(m)
                    swap_temp = medoids_idx[idx]
                    medoids_idx[idx] = item
                    tmp,medoids_ = totalcost(blogwords,pearson_distance,medoids_idx)
                    #print tmp,'-------->',medoids_.keys()
                    if tmp < current_cost :
                        best_choice = list(medoids_idx)
                        best_res = dict(medoids_)
                        current_cost = tmp
                    medoids_idx[idx] = swap_temp
        iter_count += 1
        print current_cost,iter_count
        if best_choice == medoids_idx : break
        if current_cost <= pre_cost :
            pre_cost = current_cost
            medoids = best_res
            medoids_idx = best_choice
        
    
    return current_cost, best_choice, best_res
